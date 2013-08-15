<?php

// Trigger statistics
$entities = entity_load('commerce_product', array($output));
entity_view('commerce_product', $entities);

print $output;

