<html>

<body>
    <?php

    // retrieve data from POST request sent by form
    $name = $_POST["names"];
    $os = $_POST["os"];
    $php = $_POST["php"];
    $web = $_POST["web"];

    // display retrieved data
    echo "Your name is $name";
    echo "<br/>";
    echo "Operating system you use is $os";
    echo "<br/>";
    echo "Learn php before?: $php";
    echo "<br/>";
    echo "Your favorite web is: $web";
    echo "<br/>";

    ?>
</body>

</html>