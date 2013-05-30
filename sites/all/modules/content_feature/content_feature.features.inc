<?php
/**
 * @file
 * content_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_feature_node_info() {
  $items = array(
    'community_post' => array(
      'name' => t('Community post'),
      'base' => 'node_content',
      'description' => t('A post to your community noticeboard that will also be emailed to those near you who want to receive such posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Please fill in all the fields below.'),
    ),
    'shareable' => array(
      'name' => t('Shareable'),
      'base' => 'node_content',
      'description' => t('Shareables are goods, skills or services you are willing to share with your neighbours.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Please fill in all the fields below (Note that your phone number is optional, and your email address will never be accessable).'),
    ),
  );
  return $items;
}
