#include <string>

using namespace std;

class ClientePJ {
 private:
  string razao_social;
  string CNPJ;

 public:
  void set_razao_social(string razao);
  string get_razao_social();

  void set_CNPJ(string cnpj);
  string get_CNPJ();
};