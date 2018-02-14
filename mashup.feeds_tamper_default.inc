<?php
/**
 * @file
 * mashup.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function mashup_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'meetup_json_api-jsonpath_parser_10-math';
  $feeds_tamper->importer = 'meetup_json_api';
  $feeds_tamper->source = 'jsonpath_parser:10';
  $feeds_tamper->plugin_id = 'math';
  $feeds_tamper->settings = array(
    'operation' => 'division',
    'value' => '1000',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Mathematical operation';
  $export['meetup_json_api-jsonpath_parser_10-math'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'meetup_json_api-jsonpath_parser_11-default_value';
  $feeds_tamper->importer = 'meetup_json_api';
  $feeds_tamper->source = 'jsonpath_parser:11';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '0.0002',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['meetup_json_api-jsonpath_parser_11-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'meetup_json_api-jsonpath_parser_11-required';
  $feeds_tamper->importer = 'meetup_json_api';
  $feeds_tamper->source = 'jsonpath_parser:11';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Required field';
  $export['meetup_json_api-jsonpath_parser_11-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'meetup_json_api-jsonpath_parser_12-default_value';
  $feeds_tamper->importer = 'meetup_json_api';
  $feeds_tamper->source = 'jsonpath_parser:12';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '0.0002',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['meetup_json_api-jsonpath_parser_12-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'meetup_json_api-jsonpath_parser_12-required';
  $feeds_tamper->importer = 'meetup_json_api';
  $feeds_tamper->source = 'jsonpath_parser:12';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Required field';
  $export['meetup_json_api-jsonpath_parser_12-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'meetup_json_api-jsonpath_parser_18-math';
  $feeds_tamper->importer = 'meetup_json_api';
  $feeds_tamper->source = 'jsonpath_parser:18';
  $feeds_tamper->plugin_id = 'math';
  $feeds_tamper->settings = array(
    'operation' => 'division',
    'value' => '1000',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Mathematical operation';
  $export['meetup_json_api-jsonpath_parser_18-math'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'meetup_json_api-jsonpath_parser_2-html_entity_decode';
  $feeds_tamper->importer = 'meetup_json_api';
  $feeds_tamper->source = 'jsonpath_parser:2';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['meetup_json_api-jsonpath_parser_2-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'meetup_json_api-jsonpath_parser_3-html_entity_decode';
  $feeds_tamper->importer = 'meetup_json_api';
  $feeds_tamper->source = 'jsonpath_parser:3';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['meetup_json_api-jsonpath_parser_3-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'meetup_json_api-jsonpath_parser_4-html_entity_decode';
  $feeds_tamper->importer = 'meetup_json_api';
  $feeds_tamper->source = 'jsonpath_parser:4';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['meetup_json_api-jsonpath_parser_4-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'meetup_json_api-jsonpath_parser_5-html_entity_decode';
  $feeds_tamper->importer = 'meetup_json_api';
  $feeds_tamper->source = 'jsonpath_parser:5';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['meetup_json_api-jsonpath_parser_5-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'meetup_json_api-jsonpath_parser_6-html_entity_decode';
  $feeds_tamper->importer = 'meetup_json_api';
  $feeds_tamper->source = 'jsonpath_parser:6';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['meetup_json_api-jsonpath_parser_6-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'meetup_json_api-jsonpath_parser_8-html_entity_decode';
  $feeds_tamper->importer = 'meetup_json_api';
  $feeds_tamper->source = 'jsonpath_parser:8';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['meetup_json_api-jsonpath_parser_8-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'meetup_json_api-jsonpath_parser_9-math';
  $feeds_tamper->importer = 'meetup_json_api';
  $feeds_tamper->source = 'jsonpath_parser:9';
  $feeds_tamper->plugin_id = 'math';
  $feeds_tamper->settings = array(
    'operation' => 'division',
    'value' => '1000',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Mathematical operation';
  $export['meetup_json_api-jsonpath_parser_9-math'] = $feeds_tamper;

  return $export;
}
