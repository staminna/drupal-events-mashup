<?php
/**
 * @file
 * mashup.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mashup_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_node_info().
 */
function mashup_node_info() {
  $items = array(
    'facebook_feed' => array(
      'name' => t('Facebook Feed'),
      'base' => 'node_content',
      'description' => t('Facebook feed URL node for graph.'),
      'has_title' => '1',
      'title_label' => t('Feed name'),
      'help' => '',
    ),
    'facebook_page_url' => array(
      'name' => t('Facebook Page URL'),
      'base' => 'node_content',
      'description' => t('Feed URL node for pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'lastfm' => array(
      'name' => t('LastFM'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'lastfm_feeditem' => array(
      'name' => t('LastFM Feeditem'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'meetup' => array(
      'name' => t('Meetup'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'meetup_feeditem' => array(
      'name' => t('Meetup feeditem'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
