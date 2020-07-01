#include "../include/Diary.h"

#include <fstream>
#include <iostream>
#include <sstream>

#include "../include/Timer.h"

Diary::Diary(const std::string& name) : filename(name) {
  open_messages();
}

void Diary::add(const std::string& message) {
  Date d;
  Time t;
  d.set_from_string(get_current_date());
  t.set_from_string(get_current_time());

  Message m;
  m.content = message;
  m.date = d;
  m.time = t;
  messages.push_back(m);
}

void Diary::write() {
  std::fstream output_file("diary.txt", std::ios::out);
  int verificador = 0;

  for (size_t i = 0; i < messages.size(); ++i) {
    std::fstream input_file("diary.txt", std::ios::in);

    //verificar se data já existe
    std::string comparador;

    while (!input_file.eof()) {
      getline(input_file, comparador);

      if (comparador == "# " + messages[i].date.to_string()) {
        output_file << "- " << messages[i].time.to_string() << " " << messages[i].content << std::endl;
        verificador = 1;
      }
    }
    if (verificador) {
      verificador = 0;
      continue;
    }

    output_file << "\n# " << messages[i].date.to_string() << std::endl
                << "\n- " << messages[i].time.to_string() << " " << messages[i].content << std::endl;
  }
}

std::vector<Message*> Diary::search(const std::string& what) {
  std::vector<Message*> srch;

  for (size_t i = 0; i < messages.size(); ++i) {
    if (messages[i].content.find(what) != std::string::npos) {
      srch.push_back(&messages[i]);
    }
  }

  return srch;
}

void Diary::open_messages() {
  std::fstream input_file(filename, std::ios::in);
  std::string linha;
  std::string date;
  std::string time;

  Date d;
  Time t;

  if (!input_file.is_open()) {
    std::cout << "Erro ao abrir o arquivo" << std::endl;
    return;
  }

  while (!input_file.eof()) {
    getline(input_file, linha);
    if (linha[0] == '#') {
      date = linha.substr(2, 10);
      d.set_from_string(date);
    }
    if (linha[0] == '-') {
      time = linha.substr(2, 8);
      t.set_from_string(time);
      linha = linha.substr(11);
      Message m;
      m.date = d;
      m.time = t;
      m.content = linha;
      messages.push_back(m);
    }
  }
}