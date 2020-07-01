#ifndef W5N_DIARY_H
#define W5N_DIARY_H

#include <string>
#include <vector>

#include "Message.h"

struct Diary {
  Diary(const std::string& filename);

  std::string filename;
  std::vector<Message> messages;
  std::vector<Message*> search(const std::string& what);

  void add(const std::string& message);
  void write();
  void open_messages();
};
#endif
