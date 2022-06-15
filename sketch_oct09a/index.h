const char webpage[] PROGMEM = R"=====(
<!Doctype HTML>
<html>
<head>
  <title></title>
  <style>
    body{
      margin:0px;
      padding: 0px;
    min-height: auto;
      background-color:#1b203d;
      overflow: hidden;
      font-family: system-ui;
    }
    .clearfix{
      clear: both;
    }
    .logo{
      margin: 0px;
      margin-left: 28px;
      font-weight: bold;
      color: white;
      margin-bottom: 30px;
    }
    .logo span{
      color: #f7403b;
    }
    .sidenav {
    height: 100%;
    width: 300px;
    position: fixed;
    z-index: 1;
    top: 0;
    left: 0;
    background-color: #272c4a;
    overflow: hidden;
    transition: 0.5s;
    padding-top: 30px;
    }
    .sidenav a {
    padding: 15px 8px 15px 32px;
    text-decoration: none;
    font-size: 20px;
    color: #818181;
    display: block;
    transition: 0.3s;
    }
    .sidenav a:hover {
    color: #f1f1f1;
    background-color:#1b203d;
    }
    .sidenav{
    position: absolute;
    top: 0;
    right: 25px;
    font-size: 36px;
    }
    #main {
    transition: margin-left .5s;
    padding: 16px;
    margin-left: 300px;
    }
    .head{
      padding:20px;
    }
    .col-div-6{
      width: 50%;
      float: left;
    }
    .profile{
      display: inline-block;
      /* float: right; */
      width: 160px;
    }
    .pro-img{
      float: left;
      width: 40px;
      margin-top: 5px;
    }
    .profile p{
      color: white;
      font-weight: 500;
      margin-left: 55px;
      margin-top: 10px;
      font-size: 13.5px;
    }
    .profile p span{
      font-weight: 400;
      font-size: 12px;
      display: block;
      color: #8e8b8b;
    }
    /* For light */
    .col-div-3{
      width: 25%;
      float: left;
    }

    .box1{
    width: 85%;
      height: 100px;
      background-color: #f76a65;
      margin-left: 10px;
      padding:10px;
    }
    .box1 p{
    font-size: 35px;
    color: white;
    font-weight: bold;
    line-height: 30px;
    padding-left: 10px;
    margin-top: 20px;
    display: inline-block;
    }
    .box1 p #state{
      font-size: 32px;
      color: white;
      font-weight: bold;
      line-height: 30px;
      padding-left: 0px;
      margin-top: 5px;
      display: inline-block;
    }
    .box1 p span{
    font-size: 20px;
    font-weight: 400;
    color: #818181;
    }

    /* For Switch */
    .col-div-switch{
      width: 25%;
      float: left;
    }
    
    .box_switch{
    width: 85%;
      height: 100px;
      background-color: #4bc3e7;
      margin-left: 10px;
      padding:10px;
    }

    .box_switch p{
    font-size: 35px;
    color: white;
    font-weight: bold;
    line-height: 30px;
    padding-left: 10px;
    margin-top: 20px;
    display: inline-block;
    }
    .box_switch p #switch{
      font-size: 32px;
      color: white;
      font-weight: bold;
      line-height: 30px;
      padding-left: 0px;
      margin-top: 5px;
      display: inline-block;
    }
    .box_switch p span{
    font-size: 20px;
    font-weight: 400;
    color: #818181;
    }
    /* For Fan */
    
    .col-div-fan{
      width: 25%;
      float: left;
    }


    .box_fan{
    width: 85%;
      height: 100px;
      background-color: #e3ec5d;
      margin-left: 10px;
      padding:10px;
    }

    .box_fan p{
    font-size: 35px;
    color: white;
    font-weight: bold;
    line-height: 30px;
    padding-left: 10px;
    margin-top: 20px;
    display: inline-block;
    }
    .box_fan p #fan{
      font-size: 32px;
      color: white;
      font-weight: bold;
      line-height: 30px;
      padding-left: 0px;
      margin-top: 5px;
      display: inline-block;
    }
    .box_fan p span{
    font-size: 20px;
    font-weight: 400;
    color: #818181;
    }

    /* For chimni */
    .col-div-chimni{
      width: 25%;
      float: left;
    }
    
    .box_chimni{
    width: 85%;
      height: 100px;
      background-color: #bf65e2;
      margin-left: 10px;
      padding:10px;
    }

    .box_chimni p{
    font-size: 35px;
    color: white;
    font-weight: bold;
    line-height: 30px;
    padding-left: 10px;
    margin-top: 20px;
    display: inline-block;
    }
    .box_chimni p #chimni{
      font-size: 32px;
      color: white;
      font-weight: bold;
      line-height: 30px;
      padding-left: 0px;
      margin-top: 5px;
      display: inline-block;
    }
    .box_chimni p span{
    font-size: 20px;
    font-weight: 400;
    color: #818181;
    }
    /* For Fridge */
    .col-div-fridge{
      width: 25%;
      float: left;
    }

    .box_fridge{
    width: 85%;
      height: 100px;
      background-color: #67eb8f;
      margin-left: 10px;
      padding:10px;
    }

    .box_fridge p{
    font-size: 35px;
    color: white;
    font-weight: bold;
    line-height: 30px;
    padding-left: 10px;
    margin-top: 20px;
    display: inline-block;
    }
    .box_fridge p #fridge{
      font-size: 32px;
      color: white;
      font-weight: bold;
      line-height: 30px;
      padding-left: 0px;
      margin-top: 5px;
      display: inline-block;
    }
    .box_fridge p span{
    font-size: 20px;
    font-weight: 400;
    color: #818181;
    }

    .box-icon{
    font-size: 40px!important;
    float: right;
    margin-top: 35px!important;
    color: #818181;
    padding-right: 10px;
    }
/* For temperature */
    .col-div-temp{
      width: 25%;
      float: left;
    }

    .box{
      width: 85%;
      height: 100px;
      background-color: #272c4a;
      margin-left: 10px;
      padding:10px;
    }

    .box p{
      font-size: 35px;
      color: white;
      font-weight: bold;
      line-height: 30px;
      padding-left: 10px;
      margin-top: 20px;
      display: inline-block;
    }

    .box p span{
      font-size: 20px;
      font-weight: 400;
      color: #818181;
    }
    .box p #adc_val_temp{
      font-size: 42px;
      color: white;
      font-weight: bold;
      line-height: 28px;
      padding-left: 7px;
      margin-top: 0px;
      display: inline-block;
    }
    /* For humidity */
    .col-div-hum{
      width: 25%;
      float: left;
    }
    
    .box_hum{
      width: 85%;
      height: 100px;
      background-color: #272c4a;
      margin-left: 10px;
      padding:10px;
    }

    .box_hum p{
      font-size: 35px;
      color: white;
      font-weight: bold;
      line-height: 30px;
      padding-left: 10px;
      margin-top: 20px;
      display: inline-block;
    }

    .box_hum p #adc_val_hum{
      font-size: 42px;
      color: white;
      font-weight: bold;
      line-height: 28px;
      padding-left: 7px;
      margin-top: 0px;
      display: inline-block;
    }

    .box_hum p span{
      font-size: 20px;
      font-weight: 400;
      color: #818181;
    }

    /* For Air */
    
    .col-div-air{
      width: 25%;
      float: left;
    }
    
    .box_air{
      width: 85%;
      height: 100px;
      background-color: #272c4a;
      margin-left: 10px;
      padding:10px;
    }

    .box_air p{
      font-size: 35px;
      color: white;
      font-weight: bold;
      line-height: 30px;
      padding-left: 10px;
      margin-top: 20px;
      display: inline-block;
    }

    .box_air p #adc_val_air{
      font-size: 42px;
      color: white;
      font-weight: bold;
      line-height: 28px;
      padding-left: 7px;
      margin-top: 0px;
      display: inline-block;
    }

    .box_air p span{
      font-size: 20px;
      font-weight: 400;
      color: #818181;
    }

    /* For distance */
    .col-div-distance{
      margin-top: 23px;
      width: 25%;
      float: left;
    }

    .box_distance{
      width: 85%;
      height: 100px;
      background-color: #272c4a;
      margin-left: 10px;
      padding:10px;
    }
    .box_distance p{
      font-size: 35px;
      color: white;
      font-weight: bold;
      line-height: 30px;
      padding-left: 10px;
      margin-top: 20px;
      display: inline-block;
    }
    .box_distance p #adc_val_distance{
      font-size: 42px;
      color: white;
      font-weight: bold;
      line-height: 28px;
      padding-left: 7px;
      margin-top: 0px;
      display: inline-block;
    }
    
    .box_distance p span{
      font-size: 20px;
      font-weight: 400;
      color: #818181;
    }
    .box-icon{
      font-size: 40px!important;
      float: right;
      margin-top: 35px!important;
      color: #818181;
      padding-right: 10px;
    }
    .col-div-8{
      width: 70%;
      float: left;
    }
    .col-div-4{
    width: 40%;
    /* float: left; */
    display: flex
    }
    .content-box{
      
    padding: 17px;
    display: block;
    }
    .content-box p{
      margin: 0px;
      font-size: 20px;
      color: #f7403b;
    }
    .content-box p span{
      float: right;
      background-color: #ddd;
      padding: 3px 10px;
      font-size: 15px;
    }
    .box-8, .box-4{
    width: 90%;
    background-color: #272c4a;
    height: 345px;
    margin-top: 48px;
    margin-left: 23px;
      
    }
    .nav2{
      display: none;
    }

    .box-8{
      margin-left: 10px;
    }
    table {
    font-family: arial, sans-serif;
    border-collapse: collapse;
    width: 100%;
    
    }
    td, th {
    text-align: left;
    padding:15px;
    color: #ddd;
    border-bottom: 1px solid #81818140;
    }
    /* 
    .circle-wrap {
    margin: 50px auto;
    width: 150px;
    height: 150px;
    background: #e6e2e7;
    border-radius: 50%;
    }
    .circle-wrap .circle .mask,
    .circle-wrap .circle .fill {
    width: 150px;
    height: 150px;
    position: absolute;
    border-radius: 50%;
    }
    .circle-wrap .circle .mask {
    clip: rect(0px, 150px, 150px, 75px);
    }

    .circle-wrap .circle .mask .fill {
    clip: rect(0px, 75px, 150px, 0px);
    background-color: #f7403b;
    }
    .circle-wrap .circle .mask.full,
    .circle-wrap .circle .fill {
    animation: fill ease-in-out 3s;
    transform: rotate(126deg);
    }

    @keyframes fill {
    0% {
      transform: rotate(0deg);
    }
    100% {
      transform: rotate(126deg);
    }
    }
    .circle-wrap .inside-circle {
    width: 130px;
    height: 130px;
    border-radius: 50%;
    background: #fff;
    line-height: 130px;
    text-align: center;
    margin-top: 10px;
    margin-left: 10px;
    position: absolute;
    z-index: 100;
    font-weight: 700;
    font-size: 2em;
    } */

    @media screen and (max-width: 1000px) {
    
    }
  </style>
  <link rel="stylesheet" href="css/style.css" type="text/css"/>
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
</head>


<body>
  
  <div id="mySidenav" class="sidenav">
  <p class="logo">Dashboard</p>
  <a href="#" class="icon-a"><i class="fa fa-dashboard icons"></i> &nbsp;&nbsp;Room 1</a>
  <a href="#" class="icon-a"><i class="fa fa-dashboard icons"></i> &nbsp;&nbsp;Room 2</a>
  <a href="#" class="icon-a"><i class="fa fa-dashboard icons"></i> &nbsp;&nbsp;Room 3</a>

</div>
<div id="main">

  <div class="head">
    <div class="col-div-6">
<span style="font-size:30px;cursor:pointer; color: white;" class="nav"  >&#9776; Room 1</span>
<span style="font-size:30px;cursor:pointer; color: white;" class="nav2"  >&#9776; Room 1</span>
</div>
  
  <div class="clearfix"></div>
</div>

  <div class="clearfix"></div>
  <br/>
    <div class="col-div-3" >
      <div class="box1" id="lightState" onclick="changeColor(); sendData(1)" ondblclick="changeNormal(); sendData(0)">
        <script>
          function changeColor(){
            document.getElementById("lightState").style.background = "Pink";
          }
          function changeNormal(){
            document.getElementById("lightState").style.background = "";
          }

        </script>
        <p><span id="state">NA</span><br/><span>Light</span></p>
      </div>
    </div>
  <a href="">
    <div class="col-div-switch">
      <div class="box_switch" id="state1" onclick="changeSColor(); sendSData(1)" ondblclick="changeSNormal(); sendSData(0)" >
        <script>
          function changeSColor(){
          document.getElementById("state1").style.background = "Pink";
        }
          function changeSNormal(){
          document.getElementById("state1").style.background = "";
        }
        </script>
        
        <p><span id="switch">NA</span><br/><span>Switch - 1</span></p>
      </div>
    </div>
  </a>
  <a href="">
    <div class="col-div-fan">
      <div class="box_fan" id="state2" onclick="changeFColor()" ondblclick="changeFNormal()">
        <script>
          function changeFColor(){
            document.getElementById("state2").style.background = "Pink";
          }
          function changeFanNormal(){
            document.getElementById("state2").style.background = "";
          } 
        </script>
        <p><span id="fan">NA</span><br/><span>Fan</span></p>
      </div>
    </div>
  </a>
  <a href="">
    <div class="col-div-chimni" id="chimniState" onclick="changeChimniColor()" ondblclick="changeChimniNormal()"> 
      <div class="box_chimni" id="chimniState" onclick="changeChimniColor()" ondblclick="changeChimniNormal()">
        <script>
          function changeChimniColor(){
            document.getElementById("fanState").style.background = "Pink";
          }
          function changeChimniNormal(){
            document.getElementById("fanState").style.background = "";
          } 
        </script>
        <p><span id="chimni">NA</span><br/><span>Chimni</span></p>
      </div>
    </div>
  </a>
  <div class="clearfix"></div>
  <!-- <div class="clearfix"></div> -->
  <br/>

  <a href="">
  <div class="col-div-3">
    <div class="box_fridge" id="fridgeState" onclick="changeFridgeColor()" ondblclick="changeFridgeNormal()">
      <script>
        function changeFridgeColor(){
          document.getElementById("fridgeState").style.background = "Pink";
        }
        function changeFridgeNormal(){
          document.getElementById("fridgeState").style.background = "";
        } 
      </script>
      <p><span id="fridge">NA</span><br/><span>Fridge</span></p>
    </div>
  </div>
  <a href="">
  <div class="col-div-temp">
    <div class="box">
      <p><span id="adc_val_temp">0</span><br/><span>Temperature(C)</span></p>
    </div>
  </div>
  </a>
  <div class="col-div-hum">
    <div class="box_hum">
      <p><span id="adc_val_hum">0</span><br/><span>Humidity</span></p>
    </div>
  </div>
  </a>
  <div class="col-div-air">
    <div class="box_air">
      <p><span id="adc_val_air">115.00</span><br/><span>Air Quality</span></p>
    </div>
  </div>
  <br/><br/>
</div>


<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>

<script>
  function sendData(led_sts){
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function(){
      if(this.readyState == 4 && this.status == 200){
        document.getElementById("state").innerHTML = this.responseText;
      }
    };
    xhttp.open("GET","led_set?state="+led_sts,true);
    xhttp.send();

  }
  // for switch
  function sendSData(swtich_sts){
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function(){
      if(this.readyState == 4 && this.status == 200){
        document.getElementById("switch").innerHTML = this.responseText;
      }
    };
    xhttp.open("GET","switch_set?state="+switch_sts,true);
    xhttp.send();

  }
  // for fan
  function sendFanData(fan_sts){
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function(){
      if(this.readyState == 4 && this.status == 200){
        document.getElementById("fan").innerHTML = this.responseText;
      }
    };
    xhttp.open("GET","fan_set?state="+fan_sts,true);
    xhttp.send();

  }

  // for chimni
  
  function sendFanData(chimni_sts){
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function(){
      if(this.readyState == 4 && this.status == 200){
        document.getElementById("chimni").innerHTML = this.responseText;
      }
    };
    xhttp.open("GET","chimni_set?state="+chimni_sts,true);
    xhttp.send();

  }

  // for fridge
  function sendFanData(fridge_sts){
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function(){
      if(this.readyState == 4 && this.status == 200){
        document.getElementById("fridge").innerHTML = this.responseText;
      }
    };
    xhttp.open("GET","fridge_set?state="+fridge_sts,true);
    xhttp.send();

  }



  setInterval(function() 
{
  getData();
}, 2000);
  setInterval(function()
  {
    getHumidity();
  },2000);

  setInterval(function()
  {
    getAirQuality();
  },2000);

  function getData(){
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function(){
      if(this.readyState == 4 && this.status == 200){
        document.getElementById("adc_val_temp").innerHTML = this.responseText;
      }
    };
    xhttp.open("GET","tempread",true);
    xhttp.send();
  }

  function getHumidity(){
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function(){
      if(this.readyState == 4 && this.status == 200){
        document.getElementById("adc_val_hum").innerHTML = this.responseText;

      }
    };
    xhttp.open("GET","humiread",true);
    xhttp.send();
  }

  function getAirQuality(){
    var xhttp = XMLHttpRequest();
    xhttp.onreadystatechange = function(){
      if(this.readyState == 4 && this.status == 200){
        document.getElementById("adc_val_air").innerHTML = this.responseText;

      }
    };
    xhttp.open("GET","mq135read",true);
    xhttp.send();
  }


</script>
<script>

  $(".nav").click(function(){
    $("#mySidenav").css('width','70px');
    $("#main").css('margin-left','70px');
    $(".logo").css('visibility', 'hidden');
    $(".logo span").css('visibility', 'visible');
     $(".logo span").css('margin-left', '-10px');
     $(".icon-a").css('visibility', 'hidden');
     $(".icons").css('visibility', 'visible');
     $(".icons").css('margin-left', '-8px');
      $(".nav").css('display','none');
      $(".nav2").css('display','block');
  });

$(".nav2").click(function(){
    $("#mySidenav").css('width','300px');
    $("#main").css('margin-left','300px');
    $(".logo").css('visibility', 'visible');
     $(".icon-a").css('visibility', 'visible');
     $(".icons").css('visibility', 'visible');
     $(".nav").css('display','block');
      $(".nav2").css('display','none');
 });

</script>

</body>


</html>
)=====";
