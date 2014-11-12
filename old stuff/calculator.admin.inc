<?php
function you_got_it() {
	$results = drupal_set_message('Woo!');
	
	return $results;
}