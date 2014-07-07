<?php
/**
 * @file
 * book_a_librarian.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function book_a_librarian_default_rules_configuration() {
  $items = array();
  $items['rules_claim_ownership_of_book_a_librarian_node'] = entity_import('rules_config', '{ "rules_claim_ownership_of_book_a_librarian_node" : {
      "LABEL" : "Claim ownership of Book a Librarian node",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "book a librarian" ],
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "3" : "3", "49" : "49" } },
            "operation" : "OR"
          }
        },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_bl_send_email_" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_bl_email" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_bl_response" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field__bl_topic" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:author" ], "value" : [ "site:current-user" ] } },
        { "CONDITIONAL" : [
            {
              "IF" : { "NOT data_is" : { "data" : [ "node-unchanged:author" ], "value" : [ "node:author" ] } },
              "DO" : [
                { "drupal_message" : { "message" : "Owner is now [site:current-user].", "repeat" : 0 } }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "node:field-bl-send-email-" ], "value" : 1 } },
              "DO" : [
                { "mail" : {
                    "to" : [ "node:field-bl-email" ],
                    "subject" : "Book a Librarian: Response",
                    "message" : "Name: \\r\\n[node:title]\\r\\n\\r\\nTopic: \\r\\n[node:field--bl-topic]\\r\\n\\r\\nResponse: \\r\\n[node:field-bl-response]",
                    "language" : [ "" ]
                  }
                },
                { "data_set" : { "data" : [ "node:field-bl-send-email-" ], "value" : 0 } },
                { "drupal_message" : { "message" : "Response sent by email to [node:title].", "repeat" : 0 } }
              ]
            },
            { "ELSE" : [
                { "drupal_message" : {
                    "message" : "No email was sent. \\u003Cbr\\u003E\\u003Cem\\u003EIf you intended to send an email message, edit the node again and select the option for \\u0022Yes, send email.\\u0022\\u003C\\/em\\u003E",
                    "type" : "warning",
                    "repeat" : 0
                  }
                }
              ]
            }
          ]
        },
        { "redirect" : { "url" : "book-a-librarian\\/queue" } }
      ]
    }
  }');
  $items['rules_send_email_to_book_a_librarian_requester'] = entity_import('rules_config', '{ "rules_send_email_to_book_a_librarian_requester" : {
      "LABEL" : "Send email to Book a Librarian requester",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "book a librarian" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "book_a_librarian" : "book_a_librarian" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:field-bl-email], bryce.benton@austintexas.gov",
            "subject" : "Thank you for requesting to Book a Librarian.",
            "message" : "Thank you for requesting to Book a Librarian with the Austin Public Library. You can expect a reply within 1-2 business days.",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : {
            "message" : "Thank you for requesting to Book a Librarian with the Austin Public Library. You can expect a reply within 1-2 business days.",
            "repeat" : 0
          }
        },
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "49" : "49" } },
            "subject" : "new Book a Librarian request",
            "message" : "There is a new Book a Librarian request.\\r\\n\\r\\nRespond to this request here:\\r\\n[node:edit-url]\\r\\n\\r\\nBook a Librarian Queue:\\r\\n[site:url]book-a-librarian\\/queue"
          }
        },
        { "redirect" : { "url" : "[site:url]" } }
      ]
    }
  }');
  return $items;
}
