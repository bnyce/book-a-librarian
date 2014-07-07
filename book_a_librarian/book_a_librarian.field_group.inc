<?php
/**
 * @file
 * book_a_librarian.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function book_a_librarian_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bl_additional|node|book_a_librarian|form';
  $field_group->group_name = 'group_bl_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book_a_librarian';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Info',
    'weight' => '12',
    'children' => array(
      0 => 'field_got_it',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Additional Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-bl-additional field-group-fieldset',
        'description' => '<p>Please note that <strong>this is not a research service</strong>. It is designed to help you learn how to use our collections.</p>
<ul><li>We do not provide medical, legal or business advice or opinions.</li>
<li>We cannot type or proofread documents.</li>
<li>We do not offer technical support or troubleshooting except when it relates to library resources.</li>
</ul>',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_bl_additional|node|book_a_librarian|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bl_admin|node|book_a_librarian|form';
  $field_group->group_name = 'group_bl_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book_a_librarian';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Follow Up',
    'weight' => '0',
    'children' => array(
      0 => 'field_bl_response',
      1 => 'field_bl_send_email_',
      2 => 'field_bl_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Follow Up',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-bl-admin field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_bl_admin|node|book_a_librarian|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bl|node|book_a_librarian|form';
  $field_group->group_name = 'group_bl';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book_a_librarian';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'How can we contact you?',
    'weight' => '10',
    'children' => array(
      0 => 'field_bl_email',
      1 => 'field_bl_phone_number',
      2 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'How can we contact you?',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-bl field-group-fieldset',
        'description' => 'Provide your name and email and/or phone number. The Austin Public Library respects your privacy and won’t share your contact information with anyone.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_bl|node|book_a_librarian|form'] = $field_group;

  return $export;
}
