<?php

/**
 * @file
 */

/**
 * Implements hook_default_message_type().
 */
function commerce_notify_default_message_type() {
  $items = array();
  $items['product_available'] = entity_import('message_type', '{
    "name" : "product_available",
    "description" : "Product available",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : { "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" } },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "[message:field-notify-product:title] is in stock again.",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E[message:field-notify-product:title] is in stock again.\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "message_text_subject" : { "und" : [
        {
          "value" : "[message:field-notify-product:title] is in stock again",
          "format" : null,
          "safe_value" : "[message:field-notify-product:title] is in stock again"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}


