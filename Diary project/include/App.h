#ifndef W5N_APP_H
#define W5N_APP_H

#include <string>

#include "Diary.h"

struct App {
  Diary diary;
  std::string programname;

  App(const std::string& filename);
  int run(int argc, char* argv[]);
  int show_usage();
  void add();
  void add(const std::string message);
  void list_messages();
  void list_messages(std::string format);
  void search();
  void search(const std::string& what);
};
#endif
