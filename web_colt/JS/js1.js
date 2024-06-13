console.log("Hello there from our first JS file!!!")
let num = 4;
let x = prompt("Enter yourname:");
if (x) {
    console.log("truthy");
}
else {
    console.log("falsy");
}


 const password = prompt("Enter the password");
if (password.length >= 6 && password.indexOf(" ") === -1) {
    console.log("Invalid Password ");
}
else {
    console.log("Valid Password");
}