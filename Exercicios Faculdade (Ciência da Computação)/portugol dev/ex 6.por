programa {
  funcao inicio() {
    cadeia  nome 
    real horas
    real valor
    real Salario  

    escreva("nome do funcionario: ")
    leia(nome)

    escreva("horas trabalhadas: ")
    leia(horas)

    escreva("valor por hora trabalhada: ")
    leia(valor)

    Salario = horas * valor

    escreva(nome," ", Salario, " reais" )
   
  }
}
