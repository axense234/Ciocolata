#include <iostream>
#include <fstream>

using namespace std;

ifstream intrare("ciocolata.in");
ofstream iesire("ciocolata.out");

int main()
{
  unsigned long long N, PC, NPC;
  unsigned short int ciocolatePerCopil;
  intrare >> N >> PC >> NPC;

  if (PC == 0 && NPC == 0)
  {
    iesire << -1;
    return 0;
  }

  ciocolatePerCopil = N / (PC + NPC);
  cout << ciocolatePerCopil;
  if (ciocolatePerCopil < 1)
  {
    iesire << -1;
  }
  else if (PC > 0 && NPC > 0)
  {
    N -= PC * (ciocolatePerCopil + 1) + NPC * (ciocolatePerCopil - 1);
    iesire << N;
  }
  else
  {
    N -= PC * (ciocolatePerCopil) + NPC * (ciocolatePerCopil);
    iesire << N;
  }
  return 0;
}