// Tema2_POO.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Nod_Dublu.h"
#include "Node.h"
#include "Nod_Prioritate.h"
#include "Lista_Simplu_Inlantuita.h"
#include "Lista_Dublu_Inlantuita.h"
#include "Coada_Prioritati.h"
#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");

int main()
{


	Lista_Dublu_Inlantuita v[5];
	int n;
	fin >> n;
	for (int i = 1; i <= n; i++)
	{
		fin >> v[i];
		fout << v[i] << " \n";
	}
	Coada_Prioritati v1[5];
	fin >> n;
	for (int i = 1; i <= n; i++)
	{
		fin >> v1[i];
		fout << v1[i] << "\n";
	}

		return 0;
}

