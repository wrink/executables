#!/usr/bin/pop
<?php
	if ($argc > 1) {
		for ($i = 1; $i < $argc; $i++) {
			echo $argv[$i]."\n";
		}
	} else {
		echo "Hello World\n";
	}

?>
