programa {
  funcao inicio() {
    cadeia nome
    real fixo
    real vendas
    real Salario

    escreva("nome do vendedor: ")
    leia(nome)

    escreva("salário fixo: ")
    leia(fixo)

    escreva("total de vendas realizadas: ")
    leia(vendas)

    Salario = fixo + (vendas*0.15)

    escreva(Salario)
  }
}
