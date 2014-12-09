<?php
/**
 * @file
 * feature_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all';
  $context->description = 'All pages';
  $context->tag = 'Core';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'feature_tickets-rsi_ws_user_links' => array(
          'module' => 'feature_tickets',
          'delta' => 'rsi_ws_user_links',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'feature_tickets-rsi_ws_ts' => array(
          'module' => 'feature_tickets',
          'delta' => 'rsi_ws_ts',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages');
  t('Core');
  $export['all'] = $context;

  return $export;
}
