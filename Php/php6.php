<?php 

$pdo =new PDO('mysql:host=localhost;port=3306;dbname=test','root','');
$stmt = $pdo->query("SELECT name,age,gender FROM forphp");
echo '<table border="1">'.nl2br("\n");
while($row = $stmt->fetch(PDO::FETCH_ASSOC)) {
	echo "<tr><td>";
	echo ($row['name']);
	echo "</td><td>";
	echo ($row['age']);
	echo "</td><td>";
	echo ($row['gender']);
	echo nl2br("</td.</tr>\n");
}
echo nl2br("</table>\n");
?> 