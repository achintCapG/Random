<?php 
class Person {
	public $fullname = false;
	public $givenname = false;
	public $familyname = false;
	public $room = false;
	function get_name() {
		if ( $this->fullname !== false ) return $this->fullname;
		if ( $this->familyname != false && $this->givenname != false) {
			return $this->givenname . " " . $this->familyname;
		}
		return false;
	}
}

$chuck = new Person();
$chuck->fullname = "Chuck Severance";
$chuck->room = "4429NQ";

$collen = new Person();
$collen->familyname = "Van Lent";
$collen->givenname = "Collen";
$collen->room = "3349BQ";

print $chuck->get_name(). nl2br("\n");
print $chuck->get_name(). "\n";

print $collen->get_name(). nl2br("");