let max = parseInt(prompt("Enter a Maximum number!"));

    while(!max) {
        max=parseInt(prompt("Enter a valid Number"));
    }
let  guess= (prompt("Enter ur first guess('Enter 'q' to quit)"));
const targetNum = Math.floor(Math.random() * max) + 1;
let count = 1;
while (parseInt(guess) !== targetNum) {
    if (guess === 'q') {
        console.log("ok!you quit");
        break;
    } 
    guess = parseInt(guess);
    
    if (guess> targetNum ){
        guess=prompt("Guess is too high"); 
        count++;
    }
    else if(guess< targetNum) {
        guess = prompt("Guess is too low"); 
        count++;
    }
    else {
        guess=prompt("Enter a valid number ('Enter 'q' to quit)"); 
    }
    
}
if (parseInt(guess) === targetNum) {
    console.log("congrats! you won")
    console.log(`Number of guesses is ${count}`);
}