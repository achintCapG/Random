<?php 

echo "<pre>\n";
$pdo= new PDO('mysql:host=localhost;port=3306;dbname=test','root','');
$stmt = $pdo->query("SELECT * FROM ages");
while($row = $stmt->fetch(PDO::FETCH_ASSOC)) { //fetch_assoc gives the rows back in an associative array
	print_r($row);
}
echo "</pre>\n";
?>
