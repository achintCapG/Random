<?php 

require_once "pdo.php";

if( isset($_POST['user_age'])) {
	$sql ="DELETE FROM forphp WHERE age= :zip";
//	echo nl2br("<pre>\n$sql\n</pre>\n");
	$stmt = $pdo->prepare($sql);
	$stmt->execute(array(':zip'=>$_POST['age']));
}
include("php6.php");
?>
<p>Delete a user</p>
<form method="post">
	<p>Age To Delete<input type="number" name="age"></p>
	<p><input type="submit" value="delete"></p>
</form>