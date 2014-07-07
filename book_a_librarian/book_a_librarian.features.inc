<?php
/**
 * @file
 * book_a_librarian.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function book_a_librarian_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function book_a_librarian_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function book_a_librarian_node_info() {
  $items = array(
    'book_a_librarian' => array(
      'name' => t('Book a Librarian'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('<p>Book a Librarian allows you to reserve a free half hour session with a professional reference librarian at the Austin Public Library. We can help with your research paper, show you how to find competitors for your business, or assist you with library resources such as downloadable ebooks and databases. You can also schedule a tour of the Faulk Central Library.</p>
<p>Fill out the form below. A librarian will contact you within 1-2 business days, and a session will be scheduled within a week of contact unless a later date is desired.</p>
<ul><li>For one or two people, the session will last up to 30 minutes.</li>
<li>For groups of three or more, the session will last up to one hour.</li>
</ul>
<p>Additional appointments can be requested with a maximum of two appointments per month.</p>
<p>For quick, email reference questions, use <a href="http://library.austintexas.gov/ask">Ask a Librarian</a>.</p>'),
    ),
  );
  return $items;
}
