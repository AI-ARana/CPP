// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    char s[80];
    system("cls");
 
        // Write C++ code here
    std::cout<<"Enter String: ";
    std::cin.get(s,80);
    std::cout<<s<<std::endl;
    char *ptr=s;
    std::cout<<*ptr<<std::endl;
    while(*ptr!='\0')
    {
        // if(*ptr!=' ')
        // {
        //     *ptr-=32;
        // }
        if (*ptr >= 'a' && *ptr <= 'z') { 
            *ptr -= 32; // Convert lowercase to uppercase
        } else if (*ptr >= 'A' && *ptr <= 'Z') { 
            *ptr += 32; // Convert uppercase to lowercase
        }
        ptr++; 
       
        
    }
    std::cout<<s;
    return 0;
}