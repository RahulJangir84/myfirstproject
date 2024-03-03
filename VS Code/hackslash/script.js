let modeBtn = document.querySelector(".mode");
let currMode = "light";//dark   

modeBtn.addEventListener("click", () => {
    if(currMode==="light"){
        currMode="dark";
        document.querySelector("body").style.backgroundColor="#212529";
        document.querySelector("body").style.color="#f0f8ff";
        document.querySelectorAll(".new").style.color = "#f0f8ff";
    } else {
        currMode="light";
        document.querySelector("body").style.backgroundColor= "#f0f8ff";
        document.querySelector("body").style.color="#212529";
        document.querySelectorAll(".new").style.color = "#212529";
    }

    console.log(currMode);
});