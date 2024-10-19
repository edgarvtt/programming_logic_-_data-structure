function filtrarPares(number){

    let controle = 0;
    for(let i = 0 ; i <= number.length ; i++){

        if(number[i] % 2 == 0){
            console.log(number[i]);
            controle++;
        }

    }
    console.log("total de: " + '' + controle);
}

let number = [5, 8, 5, 5, 3, 8, 7, 9, 7, 4, 1, 9, 7, 0, 2, 3, 7, 3, 9, 1, 8, 2, 7, 2, 6, 7, 9, 4, 0, 4, 0, 0, 1, 8, 9, 9, 4, 1, 8, 1, 5, 4, 4, 0, 8, 5, 7, 8, 7, 8, 2, 7, 1, 2, 4, 9, 4, 5, 1, 3, 6, 4, 3, 5, 0, 1, 5, 4, 5, 0, 8, 1, 9, 0, 4, 3, 9, 3, 2, 4, 9, 5, 0, 2, 5, 5, 5, 2, 8, 1, 7, 7, 1, 0, 0, 5, 6, 8, 2, 0];


let pares = filtrarPares(number);

console.log(pares);