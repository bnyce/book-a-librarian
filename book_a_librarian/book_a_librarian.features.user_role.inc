<?php
/**
 * @file
 * book_a_librarian.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function book_a_librarian_user_default_roles() {
  $roles = array();

  // Exported role: Book a Librarian Responder.
  $roles['Book a Librarian Responder'] = array(
    'name' => 'Book a Librarian Responder',
    'weight' => 47,
  );

  return $roles;
}
