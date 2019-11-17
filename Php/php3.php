<?php

class Party {
	function __construct() {
		echo nl2br("constructed\n");
	}
	function something() {
		echo nl2br("Something\n");
	}
	function __destruct() {
		echo nl2br("Destructor\n");
	}
}

echo nl2br("--One\n");
$x = new Party();
echo nl2br("--Two\n");
$y = new Party();
$x->something();
$x = new Party();
echo nl2br("--The end\n");

?>