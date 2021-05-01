#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<cstring>
#include<bits/stdc++.h>
void main(){
    char ch;int out[10] = " ";
    cin >> ch;
    switch(ch)
    {
        case 'a': strcat(out,"a");
        case 'b': strcat(out,"b");
        case 'c': strcat(out,"c");
        break;
        case 'd': strcat(out,"d");
        break;
        default: strcat(out,"Not abcd");

    };
    cout << out << endl;
}