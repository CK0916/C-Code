#include "lib/Printer.h"
int main(){
    Printer* printer = new Printer();
    printer->print();
    delete printer;
    return 0;
}