//exercise 1

let winCups = [1959 , 1962 , 1970, 1994, 2002];

// usando for
for(let i = 0 ; i < winCups.length ; i++){

    console.log(`O brasil ganhou a copa de ${winCups[i]}`);

}


// usando for each
winCups.forEach(
    function(x){
        console.log(`O brasil ganhou a copa de ${x}`);
    }
)