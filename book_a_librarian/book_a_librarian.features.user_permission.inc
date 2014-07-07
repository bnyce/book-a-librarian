<?php
/**
 * @file
 * book_a_librarian.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function book_a_librarian_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create book_a_librarian content'.
  $permissions['create book_a_librarian content'] = array(
    'name' => 'create book_a_librarian content',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field__bl_topic'.
  $permissions['create field__bl_topic'] = array(
    'name' => 'create field__bl_topic',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_bl_email'.
  $permissions['create field_bl_email'] = array(
    'name' => 'create field_bl_email',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_bl_phone_number'.
  $permissions['create field_bl_phone_number'] = array(
    'name' => 'create field_bl_phone_number',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_bl_response'.
  $permissions['create field_bl_response'] = array(
    'name' => 'create field_bl_response',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_bl_send_email_'.
  $permissions['create field_bl_send_email_'] = array(
    'name' => 'create field_bl_send_email_',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_what_is_your_group_size_'.
  $permissions['create field_what_is_your_group_size_'] = array(
    'name' => 'create field_what_is_your_group_size_',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete any book_a_librarian content'.
  $permissions['delete any book_a_librarian content'] = array(
    'name' => 'delete any book_a_librarian content',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own book_a_librarian content'.
  $permissions['delete own book_a_librarian content'] = array(
    'name' => 'delete own book_a_librarian content',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any book_a_librarian content'.
  $permissions['edit any book_a_librarian content'] = array(
    'name' => 'edit any book_a_librarian content',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field__bl_topic'.
  $permissions['edit field__bl_topic'] = array(
    'name' => 'edit field__bl_topic',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_bl_email'.
  $permissions['edit field_bl_email'] = array(
    'name' => 'edit field_bl_email',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_bl_phone_number'.
  $permissions['edit field_bl_phone_number'] = array(
    'name' => 'edit field_bl_phone_number',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_bl_response'.
  $permissions['edit field_bl_response'] = array(
    'name' => 'edit field_bl_response',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_bl_send_email_'.
  $permissions['edit field_bl_send_email_'] = array(
    'name' => 'edit field_bl_send_email_',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_what_is_your_group_size_'.
  $permissions['edit field_what_is_your_group_size_'] = array(
    'name' => 'edit field_what_is_your_group_size_',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own book_a_librarian content'.
  $permissions['edit own book_a_librarian content'] = array(
    'name' => 'edit own book_a_librarian content',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field__bl_topic'.
  $permissions['edit own field__bl_topic'] = array(
    'name' => 'edit own field__bl_topic',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_bl_email'.
  $permissions['edit own field_bl_email'] = array(
    'name' => 'edit own field_bl_email',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_bl_phone_number'.
  $permissions['edit own field_bl_phone_number'] = array(
    'name' => 'edit own field_bl_phone_number',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_bl_response'.
  $permissions['edit own field_bl_response'] = array(
    'name' => 'edit own field_bl_response',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_bl_send_email_'.
  $permissions['edit own field_bl_send_email_'] = array(
    'name' => 'edit own field_bl_send_email_',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_what_is_your_group_size_'.
  $permissions['edit own field_what_is_your_group_size_'] = array(
    'name' => 'edit own field_what_is_your_group_size_',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field__bl_topic'.
  $permissions['view field__bl_topic'] = array(
    'name' => 'view field__bl_topic',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_bl_email'.
  $permissions['view field_bl_email'] = array(
    'name' => 'view field_bl_email',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_bl_phone_number'.
  $permissions['view field_bl_phone_number'] = array(
    'name' => 'view field_bl_phone_number',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_bl_response'.
  $permissions['view field_bl_response'] = array(
    'name' => 'view field_bl_response',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_bl_send_email_'.
  $permissions['view field_bl_send_email_'] = array(
    'name' => 'view field_bl_send_email_',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_what_is_your_group_size_'.
  $permissions['view field_what_is_your_group_size_'] = array(
    'name' => 'view field_what_is_your_group_size_',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field__bl_topic'.
  $permissions['view own field__bl_topic'] = array(
    'name' => 'view own field__bl_topic',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_bl_email'.
  $permissions['view own field_bl_email'] = array(
    'name' => 'view own field_bl_email',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_bl_phone_number'.
  $permissions['view own field_bl_phone_number'] = array(
    'name' => 'view own field_bl_phone_number',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_bl_response'.
  $permissions['view own field_bl_response'] = array(
    'name' => 'view own field_bl_response',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_bl_send_email_'.
  $permissions['view own field_bl_send_email_'] = array(
    'name' => 'view own field_bl_send_email_',
    'roles' => array(
      'Book a Librarian Responder' => 'Book a Librarian Responder',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_what_is_your_group_size_'.
  $permissions['view own field_what_is_your_group_size_'] = array(
    'name' => 'view own field_what_is_your_group_size_',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
