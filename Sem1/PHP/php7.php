<?php
$db = new mysqli("localhost", "root", "", "hukkum");
if ($db->connect_error) {
    die("Connection failed: " . $db->connect_error);
}
echo "Connected successfully <br>";
$result = $db->query("SELECT * FROM users");
while ($row = $result->fetch_assoc()) {
    echo "Name: " . $row['name'] . "<br>";
}
$db->close();
/*echo "hii";
$servername = "localhost";
$username = "root";
$password = "root";

// Create connection
$conn = new mysqli($servername, $username, $password);

// Check connection
if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}
echo "Connected successfully";*/
?>
