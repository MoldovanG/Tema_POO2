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
	
	
	Coada_Prioritati x;
	fin >> x;
	x.Pop();
	x.Push('v',3);
	x.Pop();
	Coada_Prioritati y(x);

	fout << x;
    

		return 0;
}

