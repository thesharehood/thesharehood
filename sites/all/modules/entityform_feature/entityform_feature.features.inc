<?php
/**
 * @file
 * entityform_feature.features.inc
 */

/**
 * Implements hook_default_entityform_type().
 */
function entityform_feature_default_entityform_type() {
  $items = array();
  $items['tell_us_where_you_live'] = entity_import('entityform_type', '{
    "type" : "tell_us_where_you_live",
    "label" : "Tell us where you live",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submission_rules" : [  ],
      "validation_rules" : [  ],
      "submit_button_text" : "Submit",
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "entityforms",
      "user_submissions_view" : "user_entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : "3", "4" : "4" },
      "resubmit_action" : "old",
      "access_rules" : [  ],
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "The information is required to use everything else! It\\u0027s how we know which shareables and community posts are close to you.",
        "format" : "filtered_html"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [  ],
    "paths" : [  ]
  }');
  return $items;
}
