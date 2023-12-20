<html>

<body>
    <?php

    // retrieve data from POST request sent by form
    $name = $_POST["name"];
    $os = $_POST["os"];
    $php = $_POST["learnphp"];
    $web = $_POST["favweb"];

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