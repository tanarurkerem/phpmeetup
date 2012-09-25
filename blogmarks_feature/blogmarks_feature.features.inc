<?php
/**
 * @file
 * blogmarks_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function blogmarks_feature_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function blogmarks_feature_node_info() {
  $items = array(
    'blogmark' => array(
      'name' => t('Blogmark'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
