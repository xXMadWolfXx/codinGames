#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int calculResultat(vector<int> const&tableau1, vector<int> const&tableau2)
{
    int resultat;

    for (int i(0); i<tableau1.size(); i++)
        {
            for (int j(0); j<tableau2.size(); j++)
            {
                resultat = tableau1[i] + tableau2[j];

                if (resultat == 2020)
                {
                    cout << endl << "Le premier nombre est " << tableau1[i] << " et le second " << tableau2[j] << endl << endl
                         << "Le produit des 2 fait " << tableau1[i]*tableau2[j] << endl;
                    i = tableau1.size();
                }
            }
        }

    return resultat;
}
int main()
{
    ifstream listeNombres("U:/Perso/codingGames/codinGames.txt");
    vector<int>tableauBrut;
    vector<int>tableau505; vector<int>tableau1010; vector<int>tableau1515; vector<int>tableau2020;

    while(listeNombres)
    {
        int nombre;

        listeNombres >> nombre;
        tableauBrut.push_back(nombre);

    }

    for (int i(0); i < tableauBrut.size()-1; i++)
    {
        if(tableauBrut[i] <= 505)
        {
            tableau505.push_back(tableauBrut[i]);
        }
        else if (tableauBrut[i] <= 1010)
        {
            tableau1010.push_back(tableauBrut[i]);
        }
        else if (tableauBrut[i] < 1515)
        {
            tableau1515.push_back(tableauBrut[i]);
        }
        else
        {
            tableau2020.push_back(tableauBrut[i]);
        }
    }


    if (calculResultat(tableau505, tableau2020) != 2020)
    {
        calculResultat(tableau1010, tableau1515);
    }


    return 0;
}
