<?php

require_once "pdo.php";
if( isset($_POST['name']) && isset($_POST['age']) && isset($_POST['gender'])) {

	$sql ="INSERT INTO forphp (name, age, gender) values (:name, :age, :gender) ";

	$stmt = $pdo->prepare($sql);  //prepare,execute statements are used when we have values to sustitute
	$stmt->execute(array(
		':name' => $_POST['name'],
		':age' => $_POST['age'],
		':gender' => $_POST['gender']));
}

include("php6.php");

?>

<html>
<head></head>
<body>
	<p>Add a new user</p>
	<form method="post">
		<p>Name:<input type="text" name="name" size="40"></p>
		<p>Age:<input type="number" name="age" size></p>
		<p>Gender:<input type="text" name="gender" size="10"></p>
		<p><input type="submit" value="Add New"></p>
	</form>
</body>
</html>