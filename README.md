# Examen Final de compiladores

Lenguaje de programación
* Uso de estructuras condicionales IF
* Uso de expresiones en notación prefijo
* Ud. puede definir sus palabras reservadas
* Al menos 4 operadores.

## Ejemplo de codigo
```bash
if < x 3 {
    print 1
}
else if > 3 a && < 4 5 {
    print - 10 5
}
else {
    print + 10 / * 5 2 11
}
```
![AST](example_AST.svg "AST")

## Compilar
```
cd compiler
clang++ Calc.cpp $(llvm-config --cxxflags) -lLLVM-16 -IANTLRI -lantlr4-runtime && ./a.out
```

## Optimizar
```
llc Calc.ll -o3 Calc.arm
llc-16 Calc.ll -o3 Calc.arm
```
