
//Desafio: Filtrar Números Ímpares Crie uma função chamada filtrarImpares que recebe um array de números 
//como argumento e retorna um novo array contendo apenas os números ímpares desse array.



function filtrarImpares(x){

    let impares = [] ;

    for(let i = 0; i < x.length ; i++){

    if(x[i] % 2 != 0){
        let y = 0;
        impares[y] = x[i] ;
        y++;
        
        for(let c = 0 ; c < impares.length ; c++){
        console.log(impares[c]);
    }
    
    }

  
    
}


}

let numbers = [2,1,4,3,5,10,9];

filtrarImpares(numbers);
