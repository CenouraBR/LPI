#include "../include/App.h"

#include <iostream>
#include <string>

App::App(const std::string& filename) : diary(filename) {
}

int App::run(int argc, char* argv[]) {
  programname = argv[0];
  if (argc == 1) {
    return show_usage();
  }

  std::string action = argv[1];

  if (action == "add") {
    if (argc == 2) {
      add();
    } else {
      add(argv[2]);
    }
  } else if (action == "list") {
    list_messages();
  } else if (action == "search") {
    if (argc == 2) {
      search();
    } else {
      search(argv[2]);
    }
  } else {
    return show_usage();
  }

  return 0;
}

void App::add() {
  std::string message;
  std::cout << "Enter your message:" << std::endl;
  std::getline(std::cin, message);

  add(message);
}

void App::add(const std::string message) {
  diary.add(message);
  diary.write();
}

void App::list_messages() {
  for (size_t i = 0; i < diary.messages_size; ++i) {
    const Message& message = diary.messages[i];
    std::cout << "-" << message.content << std::endl;
  }
}

void App::search() {
  std::string what;
  std::cout << "type the message you looking: " << std::endl;
  getline(std::cin, what);
  search(what);
}

void App::search(const std::string& what) {
  Message* message = diary.search(what);
  if (message) {
    std::cout << "found!" << std::endl;
    std::cout << message->content << std::endl;
    return;
  }
  std::cout << "Not found." << std::endl;
}

int App::show_usage() {
  std::cout << "Uso: " << programname << " add <mensagem>" << std::endl;
  std::cout << "Uso: " << programname << " list" << std::endl;
  std::cout << "Uso: " << programname << " search <argument>" << std::endl;
  return 1;
}
