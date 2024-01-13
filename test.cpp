#include <bits/stdc++.h>

using namespace std;

void descentrata(char cuv[21]) {
  int poz, pozz;
  char aux[21];
  if (strlen(cuv) % 2 == 1) {
    strcpy(aux, cuv);
    poz = strlen(aux) / 2 + 1;
    aux[poz] = NULL;
  }
  pozz = strlen(cuv) / 2;
  strcat(aux, cuv + pozz);
  strcpy(cuv, aux);
}

int main() {
  char s[101], mat[21][21], *p;
  int k = 0, i, j, ok = 0;
  cin.getline(s, 101);
  p = strtok(s, " ");
  while (p) {
    k++;
    strcpy(mat[k], p);
    p = strtok(NULL, " ");
  }
  for (i = 1; i <= k - 1; i++) {
    descentrat(mat[i]);
    for (j = 1; j <= k; j++)
      // strcpy(auxx,mat[i]);
      if (strcmp(mat[j], mat[i]) == 0)
        ok = 1;
  }
  if (ok == 0)
    cout << "NU";
  else
    cout << "DA";
  return 0;
}
