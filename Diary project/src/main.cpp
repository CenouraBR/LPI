#include <fstream>
#include <iostream>

#include "../include/App.h"

void open_config() {
  std::ofstream config("diary.config", std::ios::app);
  std::ifstream read_config("diary.config", std::ios::in);
  int verificar = 0;
  while (!read_config.eof()) {
    std::string linha;
    getline(read_config, linha);
    if (linha[0] == 'p' || linha[0] == 'P' || linha[0] == 'd' || linha[0] == 'D') {
      verificar = 1;
    }
  }
  if (verificar == 0) {
    config << "path=diary.md" << std::endl;
    config << "default_format=%d %t: %m";
  }
  if (verificar = 1) {
    verificar = 0;
    read_config.close();
  }
}

int main(int argc, char* argv[]) {
  open_config();
  std::ifstream read_config("diary.config", std::ios::in);
  std::string path;
  std::string linha;
  while (!read_config.eof()) {
    getline(read_config, linha);
    if (linha[0] == 'p' || linha[0] == 'P') {
      path = linha.substr(5);
    }
  }
  read_config.close();
  App aplicativo(path);
  return aplicativo.run(argc, argv);
}
