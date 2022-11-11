var randomNumber = Math.floor(Math.random()*6)+1;
var imgsrc ="images/dice"+randomNumber+".png";
var img1 = document.querySelectorAll("img")[0];
img1.setAttribute("src",imgsrc);

var randomNumber2 = Math.floor(Math.random()*6)+1;
var imgsrc2 = "images/dice"+randomNumber2+".png";
var img2 = document.querySelectorAll("img")[1];
img2.setAttribute("src",imgsrc2);

if(randomNumber>randomNumber2){
    document.querySelector("h1").innerHTML="Player 1 wins!!!";
}else if(randomNumber2>randomNumber){
    document.querySelector("h1").innerHTML="Player 2 wins!!!";
}else{
    document.querySelector("h1").innerHTML="Match draw!!!"
}

 document.querySelector("h3").innerHTML="kiran";