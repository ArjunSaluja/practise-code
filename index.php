<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
  <link rel="stylesheet" type="text/css" href="./css/style.css">
  <link rel="stylesheet" type="text/css" href="./css/utils.css">
  <link rel="preconnect" href="https://fonts.googleapis.com">
  <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
  <link href="https://fonts.googleapis.com/css2?family=Alkatra&family=Anton&family=PT+Serif&family=Smokum&display=swap" rel="stylesheet">
 
</head>
<body>
    <header>
        <nav>
            
            <ul>
                <li><a href="home.html"><img src="./images/flipkart-01.png" alt="Site Logo" /></a></li>
               <li><a href="home.html">Htome</a></li>
               <li><a href="about.html">About</a></li> 
               <li><a href="contact.html">Contact</a></li>
            </ul>
            <div class="search">
                <input type="text" name="" id="" placeholder="Search Here">
                <button class="btn">Search</button>
            </div>
        </nav>

    </header>
    <main>
        <div class="container">
            <class class="slider">
                <img src="./images/architecture-01.jpg" alt="Architecture Image">
        </div>
        <div class="card">
            <h2>Join the cricket fun</h2>
            <div class="card-item">
                <img src="./images/rain-01.png" alt="Rain Image">
        </div>
        <div class="lines">
            <P>CRICKET BATS</P>
            <p>MIN 20% OFF</p>
            <P>GRAB NOW</P>
        </div>
    </div>
    <div class="card">
        <h2>Join the cricket fun</h2>
        <div class="card-item">
            <img src="./images/snail.jpg" alt="">
    </div>
    <div class="lines">
        <P>CRICKET BATS</P>
        <p>MIN 20% OFF</p>
        <P>GRAB NOW</P>
    </div>
</div>
<div class="card">
    <h2>Join the cricket fun</h2>
    <div class="card-item">
        <?php for($i=0;$i<10;$i++){ ?>
        <img src="https://picsum.photos/640/360?random=<?php echo $i; ?>" alt="">
        <?php } ?>
</div>
<div class="lines">
    <P>CRICKET BATS</P>
    <p>MIN 20% OFF</p>
    <P>GRAB NOW</P>
</div>
</div>
<div class="card">
    <h2>Join the cricket fun</h2>
    <div class="card-item">
        <img src="https://source.unsplash.com/640×960/? cricket" alt="">
</div>
<div class="lines">
    <P>CRICKET BATS</P>
    <p>MIN 20% OFF</p>
    <P>GRAB NOW</P>
</div>
        </div>
    </div>
    </main>
    <footer class="flex-all-center">
        <p >Copyright &copy;Mycart.com</p>

    </footer>
    
</body>
</html>