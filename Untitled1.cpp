<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<title>For Ogek ??</title>

<style>

body{
margin:0;
height:100vh;
display:flex;
justify-content:center;
align-items:center;
flex-direction:column;
font-family:Arial, sans-serif;
background: linear-gradient(135deg,#ff9a9e,#fad0c4);
overflow:hidden;
text-align:center;
color:white;
}

h1{
font-size:50px;
margin-bottom:10px;
animation:fadeIn 2s;
}

p{
font-size:18px;
}

button{
padding:15px 35px;
font-size:18px;
border:none;
border-radius:30px;
background:white;
color:#ff4b6e;
cursor:pointer;
transition:0.3s;
}

button:hover{
transform:scale(1.1);
}

#message{
margin-top:25px;
font-size:22px;
max-width:500px;
opacity:0;
transition:1s;
}

.heart{
position:absolute;
color:red;
font-size:20px;
animation:fall linear infinite;
}

@keyframes fall{
0%{
transform:translateY(-10vh);
opacity:1;
}
100%{
transform:translateY(110vh);
opacity:0;
}
}

@keyframes fadeIn{
from{opacity:0; transform:translateY(-20px);}
to{opacity:1; transform:translateY(0);}
}

</style>
</head>

<body>

<h1>Hi Ogek ??</h1>
<p>Aku punya sesuatu untuk kamu...</p>

<button onclick="showLove()">Buka Pesan</button>

<div id="message">
Ogek, terima kasih sudah hadir di hidupku.  
Setiap hari bersamamu selalu terasa spesial.  
Semoga kita bisa terus berjalan bersama,  
melewati hari-hari dengan tawa dan cerita baru. ??
</div>

<script>

function showLove(){
let msg = document.getElementById("message");
msg.style.opacity="1";
createHearts();
}

function createHearts(){

for(let i=0;i<30;i++){

let heart=document.createElement("div");
heart.className="heart";
heart.innerHTML="??";

heart.style.left=Math.random()*100+"vw";
heart.style.animationDuration=(Math.random()*3+2)+"s";
heart.style.fontSize=(Math.random()*20+10)+"px";

document.body.appendChild(heart);

setTimeout(()=>{
heart.remove();
},5000);

}

}

</script>

</body>
</html>
