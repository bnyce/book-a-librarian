<?php
/**
 * @file
 * book_a_librarian.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function book_a_librarian_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'check email Book a Librarian';
  $rule->name = 'bl_valid_email';
  $rule->field_name = 'field_bl_email';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'book_a_librarian';
  $rule->validator = 'field_validation_email_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      7 => 0,
      9 => 0,
      8 => 0,
      10 => 0,
      11 => 0,
      12 => 0,
      13 => 0,
      14 => 0,
      15 => 0,
      16 => 0,
      17 => 0,
      18 => 0,
      19 => 0,
      20 => 0,
      21 => 0,
      22 => 0,
      23 => 0,
      24 => 0,
      25 => 0,
      26 => 0,
      27 => 0,
      28 => 0,
      29 => 0,
      30 => 0,
      31 => 0,
      32 => 0,
      33 => 0,
      34 => 0,
      35 => 0,
      36 => 0,
      37 => 0,
      38 => 0,
      39 => 0,
      40 => 0,
      41 => 0,
      42 => 0,
      43 => 0,
      44 => 0,
      45 => 0,
      46 => 0,
      47 => 0,
      48 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Please provide a valid email address.';
  $export['bl_valid_email'] = $rule;

  return $export;
}
