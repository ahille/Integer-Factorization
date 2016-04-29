//
//  main.cpp
//  Primfaktorzerlegung
//
//  Created by HILLETECH on 27.11.15.
//  Copyright © 2015 HILLETECH. All rights reserved.
//
#include  <iostream>

using  namespace  std;

int  main(void)

{
    int zahl , i, anz=0;
    cout  << "Gib  Integerzahl  ein: ";
    cin  >> zahl;
    cout  << "Zerlegung: ";
    for (i=2; i<=zahl; ++i)
        while (zahl%i == 0)
        {
            if (anz ==0)
                cout  << i;
            else
                cout  << '*' << i;
            
            anz ++;
            
            zahl/=i;
            
        }
}