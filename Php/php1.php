<?php 
$achint = array("full-name" => "Achint Srivastava", "College"=> "MUJ");
$achintya = array("family-name" => "Srivastava", "first-name" => "Achint", "College" => "Mofo");

function check($name) {
	
	if( isset($name["full-name"]) ) {
		return $name["College"];
	}
	if( isset($name["family-name"]) && isset($name["first-name"]) ) {
		return $name["College"];
	}
	return false;

}

print check($achint) . "\n";
print check($achintya) . "\n";
?>
