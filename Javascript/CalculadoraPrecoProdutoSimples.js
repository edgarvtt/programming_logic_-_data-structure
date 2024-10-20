// Desafio de Código usando operador ternário ()? true or false

/* 

Você deve implementar uma função chamada calcularPrecoFinal que recebe dois parâmetros:

O preço do produto (um número).
A distância para entrega (em quilômetros).

A função deve aplicar as seguintes regras:

Se o preço do produto for maior ou igual a R$ 100,00, aplicar um desconto de 10%.
Se a distância for maior que 50 km, o frete será de R$ 30,00; caso contrário, o frete será de R$ 10,00.

Retorne o preço final do produto, já com desconto (se aplicável), somado ao valor do frete.

- By: ChatGPT
- Resposta: @Edgarvtt
*/


function calcularPrecoFinal(price,km){
    
    let desconto = (price >= 100.00)? (price - (price*0.10)) : price ; 
    let frete = (km> 50)? 30 : 10;
    
    let total = desconto + frete;
    
    return console.log(total);
    
}


calcularPrecoFinal(150.00,40.00);
calcularPrecoFinal(80.00,60.00);